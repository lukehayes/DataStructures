require "minitest/autorun"
require_relative "../DS/list.rb"
require_relative "../DS/list_node.rb"

class TestList < Minitest::Test

  def setup
    a = DS::ListNode.new(100)
    b = DS::ListNode.new(200)
    @c = DS::ListNode.new(300)
    @list = DS::List.new(a)
    a.next_node = b
    b.next_node = @c
  end

  def test_next_node_is_nil
    assert true, @list.next_node_nil?(@c)
  end

  def test_can_count_elements_number
    assert_equal 3, @list.size
  end
end
