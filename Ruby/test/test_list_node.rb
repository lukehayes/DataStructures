require "minitest/autorun"

require_relative '../ds/list/list_node'

# List Node Tests.
#
class TestList < Minitest::Test
  def test_new_node_default_value_is_nil
    node = DS::ListNode.new
    assert_nil(node.value)
  end

  def test_new_node_default_next_is_nil
    node = DS::ListNode.new
    assert_nil(node.next_node)
  end

  def test_can_set_node_value
    node = DS::ListNode.new
    node.value = 444
    refute_nil(node.value)
  end

  def test_can_get_node_value
    node = DS::ListNode.new
    node.value = 444
    assert_equal(444, node.value)
  end

  def test_can_set_next_node
    first_node = DS::ListNode.new
    first_node.value = 1

    second_node = DS::ListNode.new
    second_node.value = 2

    first_node.next_node = second_node

    refute_nil(first_node.next_node)

    assert_equal(2, first_node.next_node.value)
  end
end
