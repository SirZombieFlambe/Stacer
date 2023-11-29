#include "info_manager.h"

InfoManager *InfoManager::instance = nullptr;

InfoManager *InfoManager::ins()
{
    if(! instance){
        instance = new InfoManager;
    }

    return instance;
}

QString InfoManager::getUserName() const
{
    return si.getUsername();
}

/*
 * CPU Provider
 */
quint8 InfoManager::getCpuCoreCount() const
{
    return ci.getCpuCoreCount();
}

QList<int> InfoManager::getCpuPercents() const
{
    return ci.getCpuPercents();
}

QList<double> InfoManager::getCpuLoadAvgs() const
{
    return ci.getLoadAvgs();
}

/*
 * Memory Provider
 */
void InfoManager::updateMemoryInfo()
{
    mi.updateMemoryInfo();
}

quint64 InfoManager::getSwapUsed() const
{
    return mi.getSwapUsed();
}

quint64 InfoManager::getSwapTotal() const
{
    return mi.getSwapTotal();
}

quint64 InfoManager::getMemUsed() const
{
    return mi.getMemUsed();
}

quint64 InfoManager::getMemTotal() const
{
    return mi.getMemTotal();
}

/*
 * Disk Provider
 */
QList<Disk*> InfoManager::getDisks() const
{
    return di.getDisks();
}

void InfoManager::updateDiskInfo()
{
    di.updateDiskInfo();
}

QList<quint64> InfoManager::getDiskIO()
{
    return di.getDiskIO();
}

/********************
 * Network Provider
 *******************/
quint64 InfoManager::getRXbytes() const
{
    return ni.getRXbytes();
}

quint64 InfoManager::getTXbytes() const
{
    return ni.getTXbytes();
}

/********************
 * System Provider
 *******************/
QFileInfoList InfoManager::getCrashReports() const
{
    return si.getCrashReports();
}

QFileInfoList InfoManager::getAppLogs() const
{
    return si.getAppLogs();
}

QFileInfoList InfoManager::getAppCaches() const
{
    return si.getAppCaches();
}

/********************
 * Process Provider
 *******************/
void InfoManager::updateProcesses()
{
    pi.updateProcesses();
}

QList<Process> InfoManager::getProcesses() const
{
    return pi.getProcessList();
}

int InfoManager::getNiceness(pid_t pid)
{
    // Construct the path to the stat file for the specified process ID
    QString statFilePath = QString("/proc/%1/stat").arg(pid);

    // Open the stat file for reading
    QFile statFile(statFilePath);
    if (statFile.open(QIODevice::ReadOnly)) {
        // Read the contents of the stat file
        QString statData = statFile.readAll();

        // Close the file
        statFile.close();

        // Split the stat data into fields
        QStringList statFields = statData.split(' ');

        // The 18th field (index 17) corresponds to the niceness value
        if (statFields.length() > 17) {
            bool ok;
            int niceness = statFields[17].toInt(&ok);
            if (ok) {
                return niceness;
            }
        }
    }

    // Return a default value or an indication of failure
    return -1;
}

