import UIKit
import ReactiveSwift

enum SignalError: Error {
    case overflow
    case invalidInput(Character)
}

let producer = SignalProducer<Any, Error> { obs, life in
    obs.send(value: 100)
    obs.send(value: "Hi1")
}

let producer2 = SignalProducer<Any, Error> { obs, life in
    obs.send(value: 200)
    //obs.sendCompleted()
    obs.send(value: "Hi2")
    obs.send(value: "Hi22")
}
    .take(first: 10)

let producer3 = SignalProducer<Any, Error> { obs, life in
    obs.send(value: 500)
    obs.send(value: 300)
    obs.send(value: 100000)
    obs.send(value: "Hi33")
    //obs.send(error: SignalError.overflow)
    obs.send(value: "Hi33")
}
    .take(first: 10)

SignalProducer
    .combineLatest(producer2, producer, producer3)
//.retry(upTo: 3, interval: 3, on: QueueScheduler.main)
    .take(first: 40)
    .take(until: { three in
        three.2 as! Int != 300
    })
    .startWithResult { result in
        print(Date.now, result)
    }


