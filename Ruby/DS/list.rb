module DS

  class List

    attr_accessor :head

    def initialize
    end

    def insert_at_end(value)
    end

    def size
      size = 0
      head = @head

      return 0 unless head
      size += 1

      until next_node_nil?(head)
        head = head.next_node
        size += 1
      end
      size
    end

    def empty?
      size == 0
    end

    def next_node_nil?(node)
      #puts "Node: #{node.class}"
      ##puts "Node: #{node} Value: #{node.value}"
      #puts "Node #{node} - #{node.class} - #{node.object_id}"
      node.next_node.nil?
    end

  end
end
