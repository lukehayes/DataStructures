require "minitest/autorun"
require_relative "../DS/list.rb"
require_relative "../DS/list_node.rb"

class TestList < Minitest::Test

  def setup
    @list = DS::List.new
    @list.insert_at_end(100)
    @list.insert_at_end(200)
    @list.insert_at_end(300)
  end

  #def test_can_add_node_to_end_of_list
    #@list.insert_at_end(111)
    #assert_equal 111, @list.last_node.value
  #end
  #
  def test_can_count_empty_list
    list = DS::List.new
    assert_equal 0, list.size
  end

  def test_can_count_elements_number
    assert_equal 3, @list.size
  end

  #def test_can_find_last_node
    #assert_equal @list.last_node.value, 300
  #end

  #def test_next_node_is_nil
    #assert true, @list.next_node_nil?(@c)
  #end

  #def test_next_node_is_nil_inverse
    #assert false, @list.next_node_nil?(@b)
  #end

  #def test_can_find_first_node
    #assert_equal @list.first_node.value, 100
  #end

  #def test_next_node_value_correct
    #node = DS::ListNode.new(111)
    #@list.add(node)
    #assert_equal @list.last.value, 111
  #end


  #def test_can_check_if_list_is_empty
    #empty_list = DS::ListNode.new()
    #assert_equal 0, @list.size
  #end

  #def test_list_empty_method_works
    #empty_list = DS::ListNode.new
    #assert_equal 0, empty_list.empty?
  #end

end
