#include "arch_window.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ArchWindow w;
    w.show();
    return a.exec();
}
