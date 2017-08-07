#ifndef GLOBALDEF_H
#define GLOBALDEF_H
#include <QString>
#include <QPoint>


/*******************   字体       *******************/
const static QString FAMILY    = "Family";
const static QString POINTSIZE = "Point Size";
const static QString BOLD      = "Bold";
const static QString ITALIC    = "Italic";
const static QString UNDERLINE = "Underline";
const static QString STRIKEOUT = "Strikeout";
const static QString KERNING   = "Kerning";

const static int    INVALIDVALUE = -1;           //无用值
const static int    PAINTDATA =  32;             //绘图补偿值
const static QPoint STARTPOINT = QPoint(39, 47); //绘图开始点



/*******************   label类型   *******************/
enum CONTROLTYPE
{
    TEXTTYPE,
    BINGLITYPE,
    BARCODETYPE,
    QRCODETYPE,
    TYPEMAX,
};

#endif // GLOBALDEF_H
