require "minitest/autorun"

require_relative '../ds/list/list_node'
require_relative '../ds/list/list'

# List Node Tests.
#
class TestList < Minitest::Test
  def test_list_is_enumerable
    list = DS::List.new
    assert_instance_of(Enumerable, list)
  end

  def test_can_count_number_of_list_elements
  end

  def test_new_list_has_zero_elements
  end
end
