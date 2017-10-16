#ifndef TOPTOOL_H
#define TOPTOOL_H

#include <QWidget>

namespace Ui {
class topTool;
}

class topTool : public QWidget
{
    Q_OBJECT

public:
    explicit topTool(QWidget *parent = 0);
    ~topTool();

private:
    Ui::topTool *ui;
};

#endif // TOPTOOL_H
