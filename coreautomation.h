#ifndef COREAUTOMATION_H
#define COREAUTOMATION_H

#include <QWidget>

namespace Ui {
class coreAutomation;
}

class coreAutomation : public QWidget
{
    Q_OBJECT

public:
    explicit coreAutomation(QWidget *parent = 0);
    ~coreAutomation();

private:
    Ui::coreAutomation *ui;
};

#endif // COREAUTOMATION_H
