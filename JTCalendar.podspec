Pod::Spec.new do |s|
  s.name         = "JTCalendar"
  s.version      = "2.2.7"
  s.summary      = "A customizable calendar view for iOS."
  s.homepage     = "https://github.com/jonathantribouharet/JTCalendar"
  s.license      = { :type => 'MIT' }
  s.author       = { "Jonathan VUKOVICH TRIBOUHARET" => "jonathan.tribouharet@gmail.com" }
  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/jonathantribouharet/JTCalendar.git", :tag => s.version.to_s }
  s.source_files  = 'JTCalendar/**/*.{h,m}'
  s.requires_arc = true
  s.screenshots   = ["https://raw.githubusercontent.com/jonathantribouharet/JTCalendar/master/Screens/example.gif"]
end
