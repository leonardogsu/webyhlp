#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <QString>

class ContactInfo
{

    private:
        int intId;
        int intLenguageId;

        QString qstrCompany;
        QString qstrEmail;

        int intPhoneTypeId;
        QString qstrPhone;

        bool blnLenguageFlag;
        bool blnCompanyFlag;

        bool blnPhoneFlag;
        bool blnSmsFlag;


    public:
        ContactInfo();
        void setId(int newId);
        int getId(void);

        void setLenguageId(int intNewLenguageId);
        int getLenguageId();

        void setCompany(QString qstrNewCompany);
        QString getCompany();

        void setEmail(QString qstrNewEmail);
        QString getEmail();        

        void setPhoneTypeId(int intNewPhoneTypeId);
        int getPhoneTypeId(void);

        void setPhone(QString qstrNewPhone);
        QString getPhone(void);

        void setLenguageFlag(bool blnNewLenguageFlag);
        bool getLenguageFlag(void);

        void setCompanyFlag(bool blnNewCompanyFlag);
        bool getCompanyFlag(void);

        void setPhoneFlag(bool blnNewPhoneFlag);
        bool getPhoneFlag(void);

        void setSmsFlag(bool blnNewSmsFlag);
        bool getSmsFlag(void);


};

#endif // CONTACTINFO_H
