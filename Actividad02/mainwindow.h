#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>
#include <list>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_submit_clicked();

private:
    Ui::MainWindow *ui;
    QSpinBox *id_spinBox;
    QSpinBox *voltaje_spinBox;
    QSpinBox *posicionX_spinBox;
    QSpinBox *posicionY_spinBox;
    QSpinBox *red_spinBox;
    QSpinBox *green_spinBox;
    QSpinBox *blue_spinBox;
};

// CLASE NEURONA
class Neurona {
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
public:
    Neurona(int, float, int, int, int, int, int);
    ~Neurona();
    void print();
    int get_id();
};

// CLASE LISTANEURONA
class ListaNeuronas {
private:
    std::list<Neurona> lista;
public:
    void insertar_inicio(const Neurona& neurona);
    void insertar_final(const Neurona& neurona);
    void mostrar();

};



#endif // MAINWINDOW_H
