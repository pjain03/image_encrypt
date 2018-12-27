# image_encrypt
Library and app to encrypt/decrypt images

# References
- [Gitignore](https://github.com/github/gitignore)

# App Setup
Follow the comprehensive steps on the [Flutter](https://flutter.io) website to install flutter, Android Studio, and set up VSCode for Flutter. Create a new Flutter App. Add 'image_picker' as a dependency in pubspec.yaml. Add:
- NSPhotoLibraryUsageDescription
- NSCameraUsageDescription
- NSMicrophoneUsageDescription 
dependencies as keys in ios/Runner/Info.plist as keys.

# Dependencies
- [image_picker](https://pub.dartlang.org/packages/image_picker) - A Flutter plugin for iOS and Android for picking images from the image library, and taking new pictures with the camera.