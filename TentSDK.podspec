#
# Be sure to run `pod lib lint TGSDKText.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TentSDK'
  s.version          = '0.0.1'
  s.summary          = 'TentSDK pod Use.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: 移动互联网出海一站式服务平台TigerSDK，通过对接一个SDK为单机、网游、APP提供登录、支付、数据跟踪、运营分析等多种功能。
                       DESC

  s.homepage         = 'https://github.com/TigerSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liguoping@talentwalker.com' => 'liguoping@talentwalker.com' }
  s.source           = { :git => 'https://github.com/TigerSDK/TentSDK.git', :tag => s.version.to_s }#你的仓库地址，不能用SSH地址
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  s.requires_arc = true # 是否启用ARC
  
# 设置默认的模块，如果在pod文件中导入pod项目没有指定子模块，导入的是这里指定的模块
s.default_subspec = 'TentFramework'

# 定义一个核心模块，用户存放抽象的接口、基类以及一些公用的工具类和头文件
s.subspec 'TentFramework' do |subspec|
    
    # 配置系统Framework
    subspec.frameworks = 'UIKit', 'Foundation'
    subspec.resource = 'TentFramework/Assets/*.lproj','TentFramework/Assets/TentFramework.bundle'
    
    #你的SDK路径
    subspec.vendored_frameworks = 'TentFramework/Classes/*.framework'
end

# 登录管理模块
s.subspec 'TentSDKLogin' do |login|
    # 添加依赖第三方的framework
    login.vendored_frameworks = 'TentSDKLogin/*.framework'
    # 依赖的核心模块
    login.dependency 'TentSDK/TentFramework'
end

# 账号密码登录模块
s.subspec 'TentSDKLoginPw' do |loginPw|
    # 添加依赖第三方的framework
    loginPw.vendored_frameworks = 'TentSDKLoginPw/*.framework'
    # 依赖的核心模块
    loginPw.dependency 'TentSDK/TentSDKLogin'
end

# Facebook登录模块
s.subspec 'TentSDKLoginFacebook' do |loginfb|
    # 添加依赖第三方的framework
    loginfb.vendored_frameworks = 'TentSDKLoginFacebook/*.framework'
    # 依赖的核心模块
    loginfb.dependency 'TentSDK/TentSDKLogin'
    loginfb.dependency 'FBSDKCoreKit'
    loginfb.dependency 'FBSDKLoginKit'
    loginfb.dependency 'FBSDKShareKit'
end

# VK登录模块
    s.subspec 'TentSDKLoginVK' do |loginvk|
    # 添加依赖第三方的framework
    loginvk.vendored_frameworks = 'TentSDKLoginVK/*.framework'
    # 依赖的核心模块
    loginvk.dependency 'TentSDK/TentSDKLogin'
    loginvk.dependency 'VK-ios-sdk'
end

# Pay模块
s.subspec 'TentSDKPay' do |pay|
    # 添加依赖第三方的framework
    pay.vendored_frameworks = 'TentSDKPay/*.framework'
    # 配置系统Framework
    pay.frameworks = 'StoreKit'
    # 依赖的核心模块
    pay.dependency 'TentSDK/TentFramework'
end

# AppsFlyerTracker模块
s.subspec 'TentSDKAppsFlyerTracker' do |appft|
    # 添加依赖第三方的framework
    appft.vendored_frameworks = 'TentSDKAppsFlyerTracker/*.framework'
    # 配置系统Framework
    appft.frameworks = 'AdSupport', 'iAd'
    # 依赖的核心模块
    appft.dependency 'TentSDK/TentFramework'
end

# NanigansSDK模块
s.subspec 'TentSDKNanigansSDK' do |nanigans|
    # 添加依赖第三方的framework
    nanigans.vendored_frameworks = 'TentSDKNanigansSDK/*.framework'
    # 依赖的核心模块
    nanigans.dependency 'TentSDK/TentFramework'
end

# Chartboost模块
s.subspec 'TentSDKChartboost' do |chartb|
    # 添加依赖第三方的framework
    chartb.vendored_frameworks = 'TentSDKChartboost/*.framework'
    # 依赖的核心模块
    chartb.dependency 'TentSDK/TentFramework'
end

# FireBaseFCM推送模块
s.subspec 'TentSDKFireBaseFCM' do |firebasefcm|
    # 添加依赖第三方的framework
     firebasefcm.vendored_frameworks = 'TentSDKFireBaseFCM/*.framework'
    # 依赖的核心模块
     firebasefcm.dependency 'TentSDK/TentFramework'
     firebasefcm.dependency 'Firebase/Core', '~> 5.4.0'
     firebasefcm.dependency 'Firebase/Messaging', '~> 5.4.0'
end

end
