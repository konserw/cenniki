/**
    cenniki - Menu used in CD with promotion materials for Aliaxis Utilities and Industry.
    Copyright (C) 2016  Kamil 'konserw' Strzempowicz, konserw@gmail.com

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/

import QtQuick 2.7
import QtQuick.Controls 2.0

Rectangle {
    width: 550
    height: 350
    color: "lightblue"
    opacity: 0.95
    //radius: 10

    FontLoader { id: localFont; source: "fonts/SourceSansPro-Semibold.otf" }

    TextArea {
        id: textArea
        anchors.fill: parent
        font { family: localFont.name; pixelSize: 18 }
        text:
            "Nicoll Polska Sp. z o.o.\n" +
            "ul. Energetyczna 6\n" +
            "56-400 Oleśnica\n" +
            "\n" +
            "NIP: 725-10-21-629\n" +
            "Tel.: 71 399 5655\n" +
            "marek.strzempowicz@aliaxis-ui.pl"
        selectByKeyboard: true
        selectByMouse: true
        wrapMode: "WordWrap"
    }

    Rectangle {
        id: copyAll
        color: "steelBlue"
        width: 180
        height: 1.5 * copyAllText.contentHeight
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 15

        MyText {
            id: copyAllText
            anchors.centerIn: parent
            text: "Kopiuj wszystko"
            color: "black"
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                textArea.selectAll()
                textArea.copy()
                textArea.deselect()
            }
        }
    }

    Rectangle {
        id: copyPart
        color: "steelBlue"
        width: 180
        height: 1.5 * copyPartText.contentHeight
        anchors.right: parent.right
        anchors.top: copyAll.bottom
        anchors.margins: 15

        MyText {
            id: copyPartText
            anchors.centerIn: parent
            text: "Kopiuj zaznaczenie"
            color: "black"
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                textArea.copy()
                textArea.deselect()
            }
        }
    }

    Rectangle {
        anchors.left: parent.left
        anchors.leftMargin: 20
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        height: zamknij.contentHeight + 8
        width: zamknij.contentWidth
        color: "transparent"
        MyText {
            id: zamknij
            text: " ✗  Zamknij"
        }
        MouseArea {
            anchors.fill: parent
            onClicked: ld.source=""
        }
    }
}
