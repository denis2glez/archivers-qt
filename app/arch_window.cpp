#include "arch_window.h"
#include "ui_arch_window.h"

ArchWindow::ArchWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::ArchWindow) {
    ui->setupUi(this);
}

ArchWindow::~ArchWindow() { delete ui; }
