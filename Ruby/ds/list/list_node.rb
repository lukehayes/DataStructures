# frozen_string_literal:true

module DS
  # Class represents a single Node in a Linked List.
  #
  class ListNode
    attr_accessor :value, :next_node

    def initialize(value = nil, next_node = nil)
      @value = value
      @next_node = next_node
    end
  end
end
