#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "DFDataManager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

private:
    bool verifyLNPData();
    void setupOptionsGroup();
    Ui::MainWindow *ui;

    DFManagerPtr m_dataManager;
};

#endif // MAINWINDOW_H
