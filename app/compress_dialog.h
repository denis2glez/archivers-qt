#ifndef COMPRESS_DIALOG_H
#define COMPRESS_DIALOG_H

#include <QDialog>

namespace Ui {
class CompressDialog;
}

class CompressDialog : public QDialog {
    Q_OBJECT

  public:
    explicit CompressDialog(QWidget *parent = nullptr);
    ~CompressDialog();

  private:
    Ui::CompressDialog *ui;
};

#endif // COMPRESS_DIALOG_H
