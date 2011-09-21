/**
 * @file /src/touchegg/actions/implementation/SendKeys.h
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 3 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 *
 * @author José Expósito <jose.exposito89@gmail.com> (C) 2011
 * @class  SendKeys
 */
#ifndef SENDKEYS_H
#define SENDKEYS_H

#include "src/touchegg/util/Include.h"
#include "src/touchegg/actions/implementation/Action.h"

/**
 * @~spanish
 * Envía las teclas indicadas en la configuración a la ventana bajo el cursor.
 *
 * @~english
 * Sends the keys indicated in the configuration to the window under the cursor.
 */
class SendKeys : public Action
{

private:

    /**
     * @~spanish
     * Teclas a mantener pulsadas mientras se envían el resto de teclas.
     *
     * @~english
     * Keys to hold down while sending the rest of keys.
     */
    QList<KeyCode> holdDownKeys;

    /**
     * @~spanish
     * Teclas a enviar mientras se mantienen pulsadas las holdDownKeys.
     *
     * @~english
     * Keys to send while holdDownKeys are sending.
     */
    QList<KeyCode> pressBetweenKeys;

public:

    SendKeys(const QString& settings, Window window);

    void executeStart(const QHash<QString, QVariant>& attrs);

    void executeUpdate(const QHash<QString, QVariant>& attrs);

    void executeFinish(const QHash<QString, QVariant>& attrs);
};

#endif // SENDKEYS_H