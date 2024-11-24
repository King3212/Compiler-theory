#ifndef TABLEFORGRAGH_H
#define TABLEFORGRAGH_H

#include <QWidget>
#include "globle.h"
#include "../../include/grammar/IndexedSet.h"
#include "../../include/grammar/globle.h"
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
    void initTable(graghForWA oneGragh);
    void initTable(IndexedSet<Edge> edges,QString name);
private:
    Ui::tableForGragh *ui;
    
};

#endif // TABLEFORGRAGH_H
