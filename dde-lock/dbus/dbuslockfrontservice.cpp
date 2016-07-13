#include "dbuslockfrontservice.h"

/*
 * Implementation of interface class DBusLockFront
 */

DBusLockFrontService::DBusLockFrontService(LockFrame *parent)
    : QDBusAbstractAdaptor(parent)
{
    setAutoRelaySignals(true);
}

DBusLockFrontService::~DBusLockFrontService()
{
}

void DBusLockFrontService::Show()
{
    parent()->show();
}

void DBusLockFrontService::ShowUserList()
{
    parent()->showUserList();
}

bool DBusLockFrontService::lockResult() {
    if (parent()->isVisible()) {
        return true;
    } else {
        return false;
    }
}
