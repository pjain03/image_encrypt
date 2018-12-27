///An app that encrypts images.

import 'dart:async';
import 'dart:io';

import 'package:flutter/material.dart';
import 'package:image_picker/image_picker.dart';

void main() => runApp(new ImageEncrypt());

///The Material App widget.
class ImageEncrypt extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return new MaterialApp(
      //TODO: Change names
      title: 'Image Picker Demo',
      home: new MyHomePage(title: 'Encrypt an Image'),
    );
  }
}

///Home page.
class MyHomePage extends StatefulWidget {
  MyHomePage({Key key, this.title}) : super(key: key);

  final String title;

  @override
  _MyHomePageState createState() => new _MyHomePageState();
}

///This is where the buttons to choose an image exist, 
///and where the image is previewed.
class _MyHomePageState extends State<MyHomePage> {
  Future<File> _imageFile;
  VoidCallback listener;

  ///Pick an image from the clicked source.
  void _onImageButtonPressed(ImageSource source) {
    setState(() {
      _imageFile = ImagePicker.pickImage(source: source);
    });
  }

  ///Display the picked image.
  Widget _previewImage() {
    return FutureBuilder<File>(
        future: _imageFile,
        builder: (BuildContext context, AsyncSnapshot<File> snapshot) {
          //Image chosen successfully.
          if (snapshot.connectionState == ConnectionState.done &&
              snapshot.data != null) {
            return Image.file(snapshot.data);
          } else if (snapshot.error != null) {
            return const Text(
              'Error picking image.',
              textAlign: TextAlign.center,
            );
          } else {
            return const Text(
              'You have not yet picked an image.',
              textAlign: TextAlign.center,
            );
          }
        });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      //A bar on top with the app title.
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: Center(
        //The image that is picked, or an appropriate message.
        child: _previewImage(),
      ),
      //Buttons to choose images.
      floatingActionButton: Column(
        //Place the button towards the lower edge of the screen.
        mainAxisAlignment: MainAxisAlignment.end,
        children: <Widget>[
          //The button to choose an image from the gallery.
          FloatingActionButton(
            onPressed: () {
              _onImageButtonPressed(ImageSource.gallery);
            },
            heroTag: 'image0',
            tooltip: 'Pick Image from gallery',
            child: const Icon(Icons.photo_library),
          ),
          //Pad the next button and place it above.
          Padding(
            padding: const EdgeInsets.only(top: 16.0),
            //The button to choose an image from the gallery.
            child: FloatingActionButton(
              onPressed: () {
                _onImageButtonPressed(ImageSource.camera);
              },
              heroTag: 'image1',
              tooltip: 'Take a Photo',
              child: const Icon(Icons.camera_alt),
            ),
          ),
        ],
      ),
    );
  }
}
