# frozen_string_literal: true

require_relative 'ds/list/list'
require_relative 'ds/list/list_node'

l = DS::List.new

l.each do |e|
  puts e
end

p l.head

