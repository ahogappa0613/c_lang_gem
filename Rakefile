# frozen_string_literal: true

require "bundler/gem_tasks"
require "rake/extensiontask"

task build: :compile

Rake::ExtensionTask.new("c_lang_gem") do |ext|
  ext.lib_dir = "lib/c_lang_gem"
end

task default: %i[clobber compile]
