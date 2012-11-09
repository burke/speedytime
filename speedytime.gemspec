# -*- encoding: utf-8 -*-
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'speedytime/version'

Gem::Specification.new do |gem|
  gem.name          = "speedytime"
  gem.version       = Speedytime::VERSION
  gem.authors       = ["Burke Libbey"]
  gem.email         = ["burke@libbey.me"]
  gem.description   = %q{Stupid simple gem to get the current timestamp without an object allocation}
  gem.summary   = %q{Stupid simple gem to get the current timestamp without an object allocation}
  gem.homepage      = ""

  gem.extensions    = ['ext/speedytime/extconf.rb']
  gem.files         = `git ls-files`.split($/)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ["lib"]
end
