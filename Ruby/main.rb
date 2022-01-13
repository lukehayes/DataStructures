# Add DS folder to include path so no more 'require_relative'
$LOAD_PATH.unshift(Dir.pwd + "/DS/")

require "list"

l = DS::List.new


