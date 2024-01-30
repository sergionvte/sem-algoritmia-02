#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // spinboxes
    id_spinBox = findChild<QSpinBox*>("id_spinBox");
    voltaje_spinBox = findChild<QSpinBox*>("voltaje_spinBox");
    posicionX_spinBox = findChild<QSpinBox*>("posicionX_spinBox");
    posicionY_spinBox = findChild<QSpinBox*>("posicionY_spinBox");
    red_spinBox = findChild<QSpinBox*>("red_spinBox");
    green_spinBox = findChild<QSpinBox*>("green_spinBox");
    blue_spinBox = findChild<QSpinBox*>("blue_spinBox");
}

MainWindow::~MainWindow()
{
    delete ui;
}


Neurona::Neurona(int _id, float _voltaje, int _posicion_x, int _posicion_y, int _red, int _green, int _blue) {
    id = _id;
    voltaje = _voltaje;
    posicion_x = _posicion_x;
    posicion_y = _posicion_y;
    red = _red;
    green = _green;
    blue = _blue;
}

Neurona::~Neurona() {}

void Neurona::print() {
    std::cout << "NEURONA " << id << std::endl << std::endl
              << "voltaje: " << voltaje << std::endl
              << "posicion x: " << posicion_x << std::endl
              << "posicion y" << posicion_y << std::endl
              << "red: " << red << std::endl
              << "green: " << green << std::endl
              << "blue: " << blue << std::endl
              << std::endl;
}

int Neurona::get_id() {
    return id;
}

void ListaNeuronas::insertar_inicio(const Neurona& neurona) {
    lista.push_front(neurona);
}

void ListaNeuronas::insertar_final(const Neurona& neurona) {
    lista.push_back(neurona);
}

void ListaNeuronas::mostrar() {
    for (std::list<Neurona>::iterator it = lista.begin(); it != lista.end(); ++it) {
        int id_actual = it ->get_id();
        std::cout << "Neurona " << id_actual << std::endl;
    }
}

void MainWindow::on_submit_clicked()
{
    // get Spinbox values
    int idValue = id_spinBox->value();
    float voltajeValue = voltaje_spinBox->value();
    int posicionXValue = posicionX_spinBox->value();
    int posicionYValue = posicionY_spinBox->value();
    int redValue = red_spinBox->value();
    int greenValue = green_spinBox->value();
    int blueValue = blue_spinBox->value();
    Neurona *n = new Neurona(idValue, voltajeValue, posicionXValue, posicionYValue, redValue, greenValue, blueValue);
    n->print();
}

