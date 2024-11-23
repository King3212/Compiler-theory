#ifndef TABLEFORGRAGH_H
#define TABLEFORGRAGH_H

#include <QWidget>
#include "globle.h"
#include "../../include/grammar/IndexedSet.h"
using namespace std;
namespace Ui {
class tableForGragh;
}

class tableForGragh : public QWidget
{
    Q_OBJECT

public:
    explicit tableForGragh(QWidget *parent = nullptr);
    ~tableForGragh();
    void initTable(gragh oneGragh);
private:
    Ui::tableForGragh *ui;
    
};

#endif // TABLEFORGRAGH_H
