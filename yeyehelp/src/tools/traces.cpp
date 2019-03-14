#include "traces.h"

PrintTrace::PrintTrace(QString qstrRequestId,QString qstrMethodName,QString qstrMessage,int intTraceMode)
{
    qDebug() << "---------------------------------------------------------------------------------------";
    qDebug() << qstrMethodName;
    qDebug() << "---------------------------------------------------------------------------------------";
    qDebug() << "RequestId:"<< qstrRequestId;
    qDebug() << "qstrMessage:"<< qstrMessage;
    qDebug() << "intTraceMode:"<< intTraceMode;
    qDebug() << "Date:"<< QDateTime::currentDateTime();
    qDebug() << "---------------------------------------------------------------------------------------"<<endl;

}



