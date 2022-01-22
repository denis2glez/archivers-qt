#ifndef ARCH_WINDOW_H
#define ARCH_WINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>

namespace Ui {
class ArchWindow;
}

class ArchWindow : public QMainWindow {
    Q_OBJECT

  public:
    explicit ArchWindow(QWidget *parent = nullptr);
    ~ArchWindow();

private slots:
    void on_listView_clicked(const QModelIndex &index);

  private:
    Ui::ArchWindow *ui;

    QFileSystemModel *fileSystemModel;
};

#endif // ARCH_WINDOW_H
