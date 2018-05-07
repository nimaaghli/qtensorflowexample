#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <fstream>
#include <utility>
#include <vector>
#include <iostream>

#include <tensorflow/c/c_api.h>
#include "tensorflow/core/public/session.h"
//#include "tensorflow/core/platform/env.h"

//using tensorflow::Flag;
//using tensorflow::Tensor;
//using tensorflow::Status;
//using tensorflow::string;
//using tensorflow::int32;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}
