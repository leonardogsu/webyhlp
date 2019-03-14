#ifndef PRINTTRACE_H
#define PRINTTRACE_H
#include <QString>
#include <QDate>
#include <QDebug>

class PrintTrace
{

    private:
        int intId;
        int intLenguageId;

        QString qstrRequestId;
        QString qstrMethodName;
        QString qstrMessage;
        int intTraceMode;
        QDate qdtDate;



    public:

        PrintTrace(QString qstrRequestId,QString qstrMethodName,QString qstrMessage,int intTraceMode);



};

#endif // PRINTTRACE_H
