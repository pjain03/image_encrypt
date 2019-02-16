import 'package:flutter/material.dart';
import 'package:fluttertest/pick_one_image.dart';
import 'package:fluttertest/pick_two_images.dart';

class AlgorithmSelect extends StatefulWidget {
  @override
  State createState() => new AlgorithmSelectState();
}

class AlgorithmSelectState extends State<AlgorithmSelect> {
  bool isDefault = false;
  bool isRubik = false;
  bool isMeaningful = false;

  int numImages = 0;

  bool showProgressCircle = false;

  defaultSelected() {
    setState(() {
      isDefault = !isDefault;
      isRubik = false;
      isMeaningful = false;
    });
  }

  rubikSelected() {
    setState(() {
      isDefault = false;
      isRubik = !isRubik;
      isMeaningful = false;
    });
  }

  meaningfulSelected() {
    setState(() {
      isDefault = false;
      isRubik = false;
      isMeaningful = !isMeaningful;
    });
  }

  navigate() {
    if (isDefault) {
      Navigator.push(
        context, MaterialPageRoute(
          builder: (context) => PickOneImage(algo: "default"),
        )
      );
    } else if (isRubik) {
      Navigator.push(
        context, MaterialPageRoute(
          builder: (context) => PickOneImage(algo: "rubik"),
        )
      );
    } else {
      Navigator.push(
        context, MaterialPageRoute(
          builder: (context) => PickTwoImages(algo: "meaningful"),
        )
      );
    }
  }

  @override
  Widget build(BuildContext context) {
    var titleBorder = new BorderDirectional(top: new BorderSide(color: Colors.blue, width: 3.0), start: new BorderSide(color: Colors.blue, width: 3.0), end: new BorderSide(color: Colors.blue, width: 3.0));
    var detailBorder = new BorderDirectional(bottom: new BorderSide(color: Colors.blue, width: 3.0), start: new BorderSide(color: Colors.blue, width: 3.0), end: new BorderSide(color: Colors.blue, width: 3.0));

    var title = new Container(
        padding: EdgeInsets.all(20.0),
            child: new Column(
              crossAxisAlignment: CrossAxisAlignment.start,
            children: <Widget>[
               new Text("Select an encryption algorithm:", textScaleFactor: 1.7,)
            ],
          ),
        );

    var defaultTitle = new Card(
      shape: isDefault ? titleBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 20.0, 20.0, 0.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.lightBlueAccent),
        child: new Column(
          children: <Widget>[
              new Padding(padding: EdgeInsets.fromLTRB(2.5, 0.5, 2.5, 2.5),),
              new Text("Default", textScaleFactor: 1.5, style: new TextStyle(color: Colors.white,)),
          ],
      ),
      ),
    );

    var defaultDetails = new Card(
      shape: isDefault ? detailBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 0.0, 20.0, 20.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.white),
        child: new Column(      
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
              new Padding(padding: EdgeInsets.all(10.0),),
              new Text("  • Randomized internals", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Padding(padding: EdgeInsets.all(10.0),)
          ],
      ),
      ),
    );

    var rubikTitle = new Card(
      shape: isRubik ? titleBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 0.0, 20.0, 0.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.teal),
        child: new Column(      
          children: <Widget>[
              new Padding(padding: EdgeInsets.fromLTRB(2.5, 0.5, 2.5, 2.5),),
              new Text("Rubik", textScaleFactor: 1.5, style: new TextStyle(color: Colors.white,)),
          ],
      ),
      ),
    );

    var rubikDetails = new Card(
      shape: isRubik ? detailBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 0.0, 20.0, 0.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.white),
        child: new Column(      
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
              new Padding(padding: EdgeInsets.all(10.0),),
              new Text("  • Uses the Rubik's cube principle of circular shifts", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Text("  • Secure", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Text("  • Creates noisy images", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Padding(padding: EdgeInsets.all(10.0),)
          ],
      ),
      ),
    );

    var meaningfulTitle = new Card(
      shape: isMeaningful ? titleBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 20.0, 20.0, 0.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.indigo),
        child: new Column(      
          children: <Widget>[
              new Padding(padding: EdgeInsets.fromLTRB(2.5, 0.5, 2.5, 2.5),),
              new Text("Arnold Transformation", textScaleFactor: 1.5, style: new TextStyle(color: Colors.white,)),
          ],
      ),
      ),
    );

    var meaningfulDetails = new Card(
      shape: isMeaningful ? detailBorder : null,
      margin: EdgeInsets.fromLTRB(20.0, 0.0, 20.0, 20.0),
      child: new Container(
        decoration: new BoxDecoration(color: Colors.white),
        child: new Column(      
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
              new Padding(padding: EdgeInsets.all(10.0),),
              new Text("  • Uses Arnold Transformation", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Text("  • Most secure", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Text("  • Encodes the image behind a visaully meaningful image", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Text("  • Encrypted image less surceptible to attacks", textScaleFactor: 1.0, style: new TextStyle(color: Colors.black),),
              new Padding(padding: EdgeInsets.all(10.0),)
          ],
      ),
      ),
    );

    return new Scaffold(
      appBar: new AppBar(
        // title: 'Select an algorithm',
        // centerTitle: true,
        backgroundColor: Colors.blue,
      ),
      
      body: 
      showProgressCircle ?
      new Center(
        child: new Column(
          
          mainAxisAlignment: MainAxisAlignment.center,
          
          children: <Widget>[
            CircularProgressIndicator()
          ])
          )
           
          :

      new ListView(
        children: [
          title,
          new GestureDetector(
            child: defaultTitle,
            onTap: this.defaultSelected,
          ),
          new GestureDetector(
            child: defaultDetails,
            onTap: this.defaultSelected,
          ),
          new GestureDetector(
            child: rubikTitle,
            onTap: this.rubikSelected,
          ),
          new GestureDetector(
            child: rubikDetails,
            onTap: this.rubikSelected,
          ),
          new GestureDetector(
            child: meaningfulTitle,
            onTap: this.meaningfulSelected,
          ),
          new GestureDetector(
            child: meaningfulDetails,
            onTap: this.meaningfulSelected,
          ),

          new Container (
            margin: EdgeInsets.fromLTRB(120, 20, 120, 20),
            child: new RaisedButton(
              child: new Text("Encrypt!", textScaleFactor: 1.5),
              padding: EdgeInsets.fromLTRB(20, 15, 20, 15),
              color: Colors.blue,
              onPressed: (isDefault || isRubik || isMeaningful) ? navigate : null,
            )
          )
        ]
      ),
    );
  }
}