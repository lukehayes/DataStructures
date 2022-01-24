module DS

  class List
    attr_accessor :head

    def initialize(head)
      @head = head
    end
  
    def next_node_nil?(node)
      node.next_node == nil
    end

  end
end

