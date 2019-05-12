type tState = {counter: int};

let initalState = {counter: 0};
let reducer = (state: tState, action: Actions.tAction) =>
  switch (action) {
  | Increment => {counter: state.counter + 1}
  | Decrement => {counter: state.counter - 1}
  };

let context = React.createContext((initalState, (_: Actions.tAction) => ()));

module Provider = {
  let makeProps = (~value, ~children, ()) => {
    "value": value,
    "children": children,
  };

  let make = React.Context.provider(context);
};