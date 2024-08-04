Pod::Spec.new do |s|
  s.name             = 'JMapiOSSDK'
s.version='5.12.2'
  s.summary          = 'The MinuteMaps JMap 4.0 iOS SDK.'

  s.description      = 'This CocoaPod provides the release version for the Jibestream iOS SDK.'

  s.homepage         = 'http://www.minuteman-llc.com/'
  s.author           = { 'mattWillis' => 'matt.willis@minuteman-llc.com' }
  s.source           = { :git => 'https://github.com/MTS-LLC/JMap-iOS-SDK-Pod.git', :tag => "#{s.version}" }
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.ios.deployment_target = '10.0'
  s.platform = :ios, '10.0'
#  s.source_files = 'JMapiOSSDK4.0/Classes/*.{h,m}'
  s.vendored_frameworks = 'JMapiOSSDK4.0/Frameworks/*.xcframework'

end
