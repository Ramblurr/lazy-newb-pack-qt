#ifndef LOCALGAMEDATA_H
#define LOCALGAMEDATA_H

#include "IGameData.h"

class LocalGameData : public virtual IGameData
{

public:
    LocalGameData();
    virtual ~LocalGameData();

    virtual QPixmap icon() const;
    virtual QString description() const;
    virtual QString author() const;
    virtual QString prettyVersion() const;
    virtual int version() const;
    virtual QString packId() const;
    virtual GameDataTypes provides() const;
    virtual QString name() const;

protected:
    void parseManifest(const QString &filepath);

private:
    QString m_name;
    QString m_author;
    QString m_prettyVersion;
    int m_version;
    QString m_description;
    QString m_iconPath;
};

#endif // LOCALGAMEDATA_H
