# Add DS folder to include path so no more 'require_relative'
$LOAD_PATH.unshift(Dir.pwd + "/DS/")

require "list"
require "list_node"
require "printer/list_printer"

lp = DS::Printer::ListPrinter.new


a = DS::ListNode.new(100)
b = DS::ListNode.new(200)
c = DS::ListNode.new(300)
d = DS::ListNode.new(400)
e = DS::ListNode.new(500)

ll = DS::List.new

a.next_node = b
b.next_node = c
c.next_node = d
d.next_node = e

