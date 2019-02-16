/// Author: Satvik Sethia
/// 01/03/2019
/// 
/// Frontend app that lets the user provide images to encrypt, 
/// and choose the encryption algorithm to be used.

import 'package:flutter/material.dart';
import 'algorithm_select_route.dart';
// import 'pick_one_image.dart';
// import 'pick_two_images.dart';

void main() => runApp(new ImageEncryptApp());

///The Material App widget.
class ImageEncryptApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return new MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Image Encrypt',
      home: AlgorithmSelect(),
      routes: <String, WidgetBuilder>{
        '/algorithm_select': (BuildContext context) => new AlgorithmSelect(),
        // '/pick_one_image': (BuildContext context) => new PickOneImage(),
        // '/pick_two_images': (BuildContext context) => new PickTwoImages(),
      },
    );
  }
}