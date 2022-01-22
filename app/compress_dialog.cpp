#include "compress_dialog.h"
#include "ui_compress_dialog.h"

CompressDialog::CompressDialog(QWidget *parent) : QDialog(parent), ui(new Ui::CompressDialog) {
    ui->setupUi(this);
}

CompressDialog::~CompressDialog() { delete ui; }
