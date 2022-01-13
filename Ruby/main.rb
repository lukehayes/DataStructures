# Add DS folder to include path so no more 'require_relative'
$LOAD_PATH.unshift(Dir.pwd + "/DS/")

require "list"
require "list_node"
require "printer/list_printer"

lp = DS::Printer::ListPrinter.new

a = DS::ListNode.new(100,nil)
b = DS::ListNode.new(200,a)
c = DS::ListNode.new(300,b)
d = DS::ListNode.new(300,c)

ll = DS::List.new(a)


node = a

loop do
  puts "Printing "
  puts node.value
  node = node.next_node
  break if node.nil?
end


