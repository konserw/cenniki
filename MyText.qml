import QtQuick 2.0


Text {
    FontLoader { id: localFont; source: "fonts/SourceSansPro-Semibold.otf" }

    font {
        family: localFont.name
        pixelSize: 20
    }
    color: "black"
}
