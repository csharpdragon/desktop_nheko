// SPDX-FileCopyrightText: Nheko Contributors
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <QObject>

#include <mtx/events/power_levels.hpp>

class TimelineModel;

class Permissions final : public QObject
{
    Q_OBJECT

public:
    Permissions(QString roomId, QObject *parent = nullptr);

    Q_INVOKABLE bool canInvite();
    Q_INVOKABLE bool canBan();
    Q_INVOKABLE bool canKick();

    Q_INVOKABLE bool canRedact();
    Q_INVOKABLE bool canChange(int eventType);
    Q_INVOKABLE bool canSend(int eventType);
    Q_INVOKABLE int defaultLevel();
    Q_INVOKABLE int redactLevel();
    Q_INVOKABLE int changeLevel(int eventType);
    Q_INVOKABLE int sendLevel(int eventType);

    Q_INVOKABLE bool canPingRoom();

    void invalidate();

    const mtx::events::state::PowerLevels &powerlevelEvent() const { return pl; };

private:
    QString roomId_;
    mtx::events::state::PowerLevels pl;
};
