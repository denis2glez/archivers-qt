#ifndef ARCH_WINDOW_H
#define ARCH_WINDOW_H

#include <QMainWindow>

namespace Ui {
class ArchWindow;
}

class ArchWindow : public QMainWindow {
    Q_OBJECT

  public:
    explicit ArchWindow(QWidget *parent = nullptr);
    ~ArchWindow();

  private:
    Ui::ArchWindow *ui;
};

#endif // ARCH_WINDOW_H
