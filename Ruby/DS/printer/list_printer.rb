module DS::Printer

  class ListPrinter

    def print
      node = @head
      loop do
        puts node.value
        node = node.next_node
        break if node.nil?
      end
    end

  end
end

