Pod::Spec.new do |s|
  s.name             = 'BMTCoreSDK'
  s.version          = '1.0.37' 
  s.summary          = 'BMTCoreSDK is used for core functionalities in ios.'
  s.description      = <<-DESC
  BMTCoreSDK is used for core functionalities in ios.This is private repo of Bytemark.
                  DESC
  s.homepage         = 'https://github.com/bytemarkinc/BTMKiOSDevSDK'
  s.license          = { :type => 'No License', :text => 'Copyright (c) 2025 Bytemark' }
  s.author           = { 'Bytemark' => 'chandan@bytemark.co' }
  s.source           = { :git => 'https://github.com/bytemarkinc/BTMKiOSDevSDK.git', :branch => 'develop' }
  s.ios.deployment_target = '16.0'
  s.public_header_files = "BMTCoreSDK/**/*.h"
  s.pod_target_xcconfig = { "DEFINES_MODULE" => "YES" }
  s.dependency "AFNetworking", "~> 4.0.0"
  s.dependency "Masonry", "~> 1.0.0"
  s.dependency "SnapKit", "~> 5.0.0"
  s.dependency "MarqueeLabel", "~> 3.2"
  s.dependency "ReactiveObjC"
  s.vendored_frameworks = 'BMTCoreSDK.xcframework'
end
