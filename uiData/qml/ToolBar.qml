import QtQuick 2.0

Rectangle {
    id:root
    width: 100
    height: 80
    color: "#00000000"

    property var names
    property var path

   Column{
       Image {
           id: image1
           width: root.width
           height: root.width / 1.5
           fillMode: Image.PreserveAspectFit
           source: path
       }
       Text {
           id: text1
           width:root.width
           text: names
           font.family: "微软雅黑"
           color:"#565353"
           verticalAlignment: Text.AlignVCenter
           horizontalAlignment: Text.AlignHCenter
           font.pixelSize: 12
       }
   }
//   MouseArea{
//       anchors.fill: parent;
//       acceptedButtons: Qt.LeftButton;
//       onClicked: {
//           if(mouse.button == Qt.LeftButton){
//               root.color = "#00000000";
//               text1.color = "Black";
//           }
//       }
//    }
}

