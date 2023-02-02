# frozen_string_literal:true

module DS
  # Class represents a single Node in a Linked List.
  #
  class ListNode
    attr_accessor :value, :next

    def initialize(value = nil)
      @value = value
    end
  end
end
