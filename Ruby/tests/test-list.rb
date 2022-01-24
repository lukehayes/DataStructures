require "minitest/autorun"
require_relative "../DS/list.rb"
require_relative "../DS/list_node.rb"

class TestList < Minitest::Test

  def setup
    @a = DS::ListNode.new(100)
    @b = DS::ListNode.new(200)
    @c = DS::ListNode.new(300)
    @list = DS::List.new(@a)
    @a.next_node = @b
    @b.next_node = @c
  end

  def test_next_node_is_nil
    assert true, @list.next_node_nil?(@c)
  end

  def test_can_find_last_node
    assert_equal @c.last.value, 111
  end

  def test_next_node_value_correct
    node = DS::ListNode.new(111)
    @list.add(node)
    assert_equal @list.last.value, 111
  end

  def test_can_add_list_node_to_list
    node = DS::ListNode.new(111)
    @list.add(node)
    #assert_equal @c.next_node, @c.next_node.instance_of? node
  end

  def test_can_count_elements_number
    assert_equal 3, @list.size
  end
end
