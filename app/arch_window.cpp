#include <QStandardPaths>
#include "arch_window.h"
#include "ui_arch_window.h"

ArchWindow::ArchWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::ArchWindow) {
    ui->setupUi(this);

    fileSystemModel = new QFileSystemModel(this);

    // Set filter
    fileSystemModel->setFilter(QDir::AllEntries | QDir::NoDot);

    // Creates our new model and populate
    const auto homePath = QDir::currentPath();

    // QFileSystemModel requires root path
    fileSystemModel->setRootPath(homePath);

    // Attach the file system model to the view and set the root index
    ui->listView->setModel(fileSystemModel);
    ui->listView->setRootIndex(fileSystemModel->setRootPath(homePath));

}

ArchWindow::~ArchWindow() { delete ui; }

void ArchWindow::on_listView_clicked(const QModelIndex &index) {
    // Get the full path of the item that's user clicked on
    const auto mPath = fileSystemModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(fileSystemModel->setRootPath(mPath));
}

