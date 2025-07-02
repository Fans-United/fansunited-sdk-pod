Pod::Spec.new do |spec|
  spec.name               = "FansUnitedSDK"
  spec.version            = "1.0.3-RC1"
  spec.summary            = "Fans United KMM SDK"
  spec.description        = <<-DESC
                            Fans United KMM SDK is a Kotlin Multiplatform Mobile SDK for Fans United APIs.

                            The Fans United Kotlin Multiplatform Mobile SDK supports both iOS and Android platforms
                            using Kotlin Multiplatform Mobile technology. The SDK provides complete coverage of the
                            Fans United APIs and is organized into different namespaces based on functionality.

                            Features:
                            • Profile Operations
                            • Football Operations
                            • Predictor Operations
                            • Top X Operations
                            • Match Quiz Operations
                            • Loyalty Operations
                            • Activity Operations
                            • Discussion Operations
                            • Private Leagues Operations
                            DESC
  spec.homepage           = "https://fansunitedmedia.com/"
  spec.documentation_url  = "https://docs.fansunitedmedia.com/"
  spec.license            = { :type => "Commercial", :file => "LICENSE" }
  spec.author             = { "Fans United Media" => "support@fansunitedmedia.com", "Borislav Gizdov" => "borislav@fansunitedmedia.com" }
  spec.source             = { :git => 'https://github.com/Fans-United/fansunited-sdk-pod.git', :tag => "#{spec.version}" }
  spec.swift_version      = "5.3"

  # Supported deployment targets
  spec.ios.deployment_target  = "12.0"

  # Published binaries
  spec.vendored_frameworks = "FansUnitedSDK.xcframework"
end
